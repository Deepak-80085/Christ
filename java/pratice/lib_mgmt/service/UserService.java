package service; 

import java.util.HashMap;
import java.util.Map;
import lib_mgmt.model.user; 
public class UserService { 
private Map<String, user> userDatabase = new HashMap<>(); 
public void addUser(user user) { 
userDatabase.put(user.getUserId(), user); 
} 
public user getUser(String userId) { 
return userDatabase.get(userId); 
} 
public void removeUser(String userId) { 
userDatabase.remove(userId); 
} 
} 