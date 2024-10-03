import java.util.*;

public class Book {

    private String title;
    private String author;
    private String isbn;
    private boolean isAvailable;

    public book(String title, String author, String isbn) {
        this.title = title;
        this.author = author;
        this.isbn = isbn;
        this.isAvailable = true;
    }
    public String getTitle() {
        return title;
    }
      
    public String getAuthor() {
        return author;
    }

    public String getIsbn() {
        return isbn;
    }

    public boolean isAvailable() {
        return isAvailable;
    }
    
public String toString() {
        return "Title: " + title + ", Author: " + author + ", ISBN: " + isbn + ", Available: " + isAvailable;
    }
}


public class User {

    private String name;
    private String memberId;
    private String contactInfo;

    public User(String name, String memberId, String contactInfo) {
        this.name = name;
        this.memberId = memberId;
        this.contactInfo = contactInfo;
    }
    public String getName() {
        return name;
    }
    public String getMemberId() {
        return memberId;
    }
    public String getContactInfo() {
        return contactInfo;
    }
    public String toString() {
        return "Name: " + name + ", Member ID: " + memberId + ", Contact Info: " + contactInfo;
    }
}

public class Library {

    private List<Book> books;
    private List<User> users;

    public Library() {
        books = new ArrayList<>();
        users = new ArrayList<>();
    }
    
    public void addBook(Book book) {
        books.add(book);
        System.out.println("Book is added ");        
    }

    public void updateBook(String isbn, Book updatedBook) {
        
    }

    public void removeBook(String isbn) {
        
    }

    
    public void addUser(User user) {
        
    }

    public void updateUser(String memberId, User updatedUser) {
        
    }

    public void removeUser(String memberId) {
        
    }

    
    public void borrowBook(String memberId, String isbn) {
        
    }

    public void returnBook(String memberId, String isbn) {
        
    }

    
    public List<Book> searchBooks(String query) {

        return new ArrayList<>();
    }

    
    public void saveToFile() {
        
    }

    public void loadFromFile() {
        
    }
}


public class LibraryManagementSystem {

    private Library library;
    private Scanner scanner;

    public LibraryManagementSystem() {
        library = new Library();
        scanner = new Scanner(System.in);
    }

    public void run() {
        
    }

    public static void main(String[] args) {
        LibraryManagementSystem lms = new LibraryManagementSystem();
        
    }
}
