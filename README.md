# Webserv 🌐

**Webserv** is a project to develop a web server in C++, capable of handling HTTP requests. The goal is to understand how a web server works and build it from scratch. This project is part of the 42 curriculum, focusing on system programming and network management. The servers works using sockets.

## Objectives

The main goal of the project is to create a web server that can effectively handle HTTP requests. The project is including the methods GET, POST and DELETE, sending appropriate responses, and managing errors. It also involves configuring a server, serving static files, and handling multiple simultaneous connections.

## Features 🧩

- **Handling HTTP requests**: The server is able to handle GET, POST, and DELETE requests.
- **HTTP headers management**: The server can parse and respond with correct HTTP headers.
- **Static files**: The server can serve static files such as images, CSS, or JavaScript files.
- **Virtual Hosts**: The server can handle multiple virtual hosts with distinct configurations.
- **Error handling**: The server correctly respond to errors such as 404 (Not Found) or 500 (Internal Server Error).

## config file 🔧:  

"host"	Defines the IP address or hostname where the server will listen.  
"port"	Port number where the server will run.  
"server_names"	List of domain names that this server responds to (for virtual hosting).  
"error_pages"	Maps HTTP error codes (e.g., 404, 500) to specific HTML error pages.  
"client_max_body_size"	Sets the maximum size (in bytes) for client request bodies.  
"routes"	Contains detailed route configurations.  
"path"	Defines the URL path for this route.  
"accepted_methods"	List of HTTP methods allowed for this route.  
"root"	Defines the directory to serve content from.  
"index"	Sets the default file for directory requests.  
"directory_listing"	Enables or disables directory listing (if no index is found).  
"upload_directory"	Specifies where uploaded files should be stored.  
"max_upload_size"	Sets a limit for individual uploaded file sizes.  
"redirect"	Defines a URL for HTTP redirection.  
"cgi_enabled"	Enables CGI execution on this route.  
"cgi_extensions"	List of file extensions that trigger CGI (e.g., .py, .php).  
"cgi_root"	The root folder where CGI scripts are located.  
