DLTS BOOK README
==============

Install drush
  
  pear channel-discover pear.drush.org 
  
	pear install drush/drush
	
You can then check if it successfully installed using the version command:	

  drush version
    
# Clone this project

In your terminal type:

  git clone https://github.com/dismorfo/dlts_book_distro.git
  

# Create a project.conf

  cd dlts_book_distro
  cp default.project.conf project.conf
  
Edit the values inside project.conf with your own system configuration.

# Building the Drupal Distribution

Build the drupal distribution by running the deploy dev script, e.g.

	sh scripts/deploy_dev_build.sh books.make


