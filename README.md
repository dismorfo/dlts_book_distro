Generic DLTS Book site
==============

# Djatoka Jpeg 2000 Image Server

Make sure Djatoka Jpeg 2000 Image Server is running in http://localhost:8080/adore-djatoka. 
If not provide the URL in the project.conf file.
    
# Clone this project

In your terminal type:

	git clone https://github.com/dismorfo/dlts_book_distro.git
  

# Create a project.conf

	cd dlts_book_distro
	cp configs/default.project.conf configs/project.conf
  
Edit the values inside project.conf with your own system configuration.

# Build the project

Build the drupal distribution by running the deploy dev script, e.g.

	sh bin/build.sh -m books.make -c configs/project.conf
