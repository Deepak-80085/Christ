// package lib_mgmt.model; 
package lib_mgmt.model;


public class user { 
private String userId; 
private String name; 
// Constructor 
public user(String userId, String name) { 
this.userId = userId; 
this.name = name; 
} 
// Getters and Setters 
public String getUserId() { 
return userId; 
} 
public void setUserId(String userId) { 
this.userId = userId; 
} 
public String getName() { 
return name; 
} 
public void setName(String name) { 
this.name = name; 
} 
@Override 
public String toString() { 
return "User{" + 
"userId='" + userId + '\'' + 
", name='" + name + '\'' + 
'}'; 
} 
}




