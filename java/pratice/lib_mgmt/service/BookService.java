package service; 

import java.util.HashMap;
import java.util.Map;
import lib_mgmt.model.Book; 
public class BookService { 
private Map<String, Book> bookCatalog = new HashMap<>(); 
public void addBook(Book book) { 
bookCatalog.put(book.getIsbn(), book); 
} 
public Book getBook(String isbn) { 
return bookCatalog.get(isbn); 
} 
public void removeBook(String isbn) { 
bookCatalog.remove(isbn); 
} 
}