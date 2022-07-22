# Autocomplete-Create a program that will allow users to search the database(array) for an item.
- User should see the list of items currently available
- User should see the window for the search input
- After entering 3 characters or more the search result should autocomplete - offers suggestions of items that start with user input as you type text in a search box.
- The suggestion list should update if the user erases characters or add new ones
- If less than 3 characters are entered - the whole list should be shown
Example:
---------------------------------
I Search:                        I
--------------------------------
Apples
Bananas
Applesauce
Bacon
Apps
---------------------------------
I Search: A                     I
--------------------------------
Apples
Bananas
Applesauce
Bacon
Apps
---------------------------------
I Search: Ap                    I
--------------------------------
Apples
Bananas
Applesauce
Bacon
Apps
---------------------------------
I Search: App                  I
--------------------------------
Apples
Applesauce
Apps
---------------------------------
I Search: Apps               I
--------------------------------
Apps

Create a class Bag that will have the following:
- the name of the collection
- an array of items
- variable to keep track of the number of items
- method displayAll
- method search ( for autocomplete )  
Extra Credit (search if any word starts with the inputed characters):
Example:
---------------------------------
I Search:                        I
--------------------------------
Apples
Bananas
Applesauce
Bacon Apps
Apps
---------------------------------
I Search: A                     I
--------------------------------
Apples
Bananas
Applesauce
Bacon Apps
Apps
---------------------------------
I Search: Ap                    I
--------------------------------
Apples
Bananas
Applesauce
Bacon Apps
Apps
---------------------------------
I Search: App                  I
--------------------------------
Apples
Applesauce
Bacon Apps
Apps
---------------------------------
I Search: Apps               I
--------------------------------
Bacon Apps
Apps
