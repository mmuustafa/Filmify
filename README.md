# Filmify
 > Your author list below should include links to all members GitHub (remove existing author).
 
 > Authors: \<[Mustafa Hassan](https://github.com/mhass027)\
\<[Jahanbir Mann](https://github.com/jmann028)\
\<[Iliyan Alibhai](https://github.com/ialib001)\>
>

## Project Description
   
   -  As developers, Filmify is important to us as we want to eliminate the idea of people being indecisvive of what movie they want to watch. A lot of the times people will be with their significant other or a group of their friends and have no clue on what movie to pick. Our project saves time for user's by picking out a movie to watch based on the user or groups interests.
     
  What languages/tools/technologies do you plan to use? (This list may change over the course of the project)  
  
  -  As of right now, we are most likely going to use a C++ backend. We want to implement a userface but are still trying to figure out what is the best technology to use. We most likely will use the std vector library to store a large vector of movies of different genres.

 What will be the input/output of your project?

 -  The input will be different settings of what the user's choice of movie genre is. Other inputs can be how long of a duration of a movie they are willing to watch. Input can also be a user's request on what movies they have already watched. The output will be the reccomended movie based on the user's interests. The output can also be movies the user has already watched as well
  
 What are the features that the project provides?
 - The project will reccomend movies based on users' preferences on genere, duration, interests, and group settings or number of people watching the movie.  We also want to add a feature that stores movies that users have already watched. A user can provide a name of a movie that he/she likes and the application can recommend a list of movies that the user might like.
 
 
 > ## Phase II
## User Interface Specification

### Navigation Diagram

![IMG_0441](https://github.com/cs100/final-project-mhass027-jmann028-ialib001-aprat023/assets/147021240/94c34b97-e647-4cba-bf79-c2827c0783a5)

### Screen Layouts

> ![CS111 Notebook-152](https://github.com/cs100/final-project-mhass027-jmann028-ialib001-aprat023/assets/147021240/f6ea6d0e-4f50-4d7e-bab6-1ef86726737f)


## Class Diagram

![UML Diagram CS100 Final Project Phase 3-2](https://github.com/cs100/final-project-mhass027-jmann028-ialib001-aprat023/assets/143841150/215583d7-40d3-4264-bfb8-9cfcbf86d339)

  
Description:
Movie Class: This class serves as a blueprint for movie objects within the system. Each Movie object has attributes such as name, genre, director, and rating. These attributes are used to store information about a movie. The class provides accessor (get) and mutator (set) methods for each attribute, enabling other parts of the system to retrieve or modify movie details.

InputOutput Class: The InputOutput class is the user interface component of the system. It is responsible for all interactions with the user. This includes displaying lists of movies and various messages, as well as collecting user input for recommendations based on different criteria such as actor, genre, or director. It likely communicates with the backend to fetch and display the relevant data.

MovieDataSet Class: This class is tasked with creating and managing a collection of movies, which is the dataset that the system operates on. The generateListOfMovies() method suggests that it populates the dataset, potentially by loading data from an external source, in our case a csv file.

MovieMethods Class: This class contains a suite of operations that can be performed on the movie dataset, such as sorting the movies by different attributes (name, rating, director, etc.) and appending movies to a user's personalized list. It operates on collections of Movie objects, as indicated by methods returning or dealing with vector<Movie> (a C++ Standard Library container used to store sequences of elements).


 
 > ## Phase III
------------------------------------------------------------------------------------
 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
