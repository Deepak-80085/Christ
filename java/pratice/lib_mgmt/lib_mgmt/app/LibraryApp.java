package lib_mgmt.app; 
import lib_mgmt.model.Book;
import lib_mgmt.model.user;
import service.BookService;
import service.UserService; 
public class LibraryApp { 
public static void main(String[] args) { 
BookService bookService = new BookService(); 
UserService userService = new UserService(); 
// Adding books 
Book book1 = new Book("978-0134685991", "Effective Java", "Joshua Bloch"); 
Book book2 = new Book("978-0596009205", "Head First Java", "Kathy Sierra"); 
bookService.addBook(book1); 
bookService.addBook(book2); 
// Adding users 
user user1 = new user("u001", "Alice Johnson"); 
user user2 = new user("u002", "Bob Smith"); 
userService.addUser(user1); 
userService.addUser(user2); 
// Retrieve and display book 
Book retrievedBook = bookService.getBook("978-0134685991"); 
System.out.println("Retrieved Book: " + retrievedBook); 
// Retrieve and display user 
user retrievedUser = userService.getUser("u001"); 
System.out.println("Retrieved User: " + retrievedUser); 
} 
} 