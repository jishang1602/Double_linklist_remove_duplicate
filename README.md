# Double_linklist_remove_duplicate

C implementation to remove duplicates from an unsorted doubly linked list

For the Double linkedlist created a struct Node. I created 4 functions for the
whole program.



1-push() ------------->Function to insert a node at the beginning 


2-printList() -------->Function to print nodes in a given doubly linked list.


3-deleteNode() ------->Function to delete a node in a Doubly Linked List. 


4-removeDuplicates() ->function to remove duplicates from Doubly Linked List.


To run the code please run the command in command prompt in ubuntu OS.


(But for my PC in windows 10 it is also working. Not knownig all the version of the system.)

gcc main.c -o main


./main


/* The output may vary as because the numbers are generated from rand() system function.*/


Original Doubly linked list: 

8 28 2 2 20

20 41 1 46 4

26 46 15 40 8

7 39 4 30 0

33 19 22 6 11

39 44 15 15 1

46 25 23 8 15

37 6 37 38 15

38 44 6 18 13

47 45 17 5 3

17 15 7 16 40

0 44 19 37 22

18 24 7 41 0

1 17 36 23 8

47 13 41 37 22

11 16 47 11 25

48 1 40 23 47

47 11 23 31 23

42 19 3 12 32

17 13 33 0 31

28 46 24 46 27

0 4 28 1 39

44 15 26 17 31

38 11 25 30 29

20 40 35 12 13

17 16 14 40 6

10 7 24 24 20

43 29 42 46 17

43 40 39 1 21

45 25 28 8 18

8 29 18 0 9

33 2 11 46 38

45 32 35 40 18

7 23 22 19 8

1 20 47 26 34

47 6 31 2 2

46 25 35 6 1

14 20 6 19 21

13 12 7 12 44

10 40 13 43 41


Doubly linked list after removing duplicates:

8 28 2 20 41

1 46 4 26 15

40 7 39 30 0

33 19 22 6 11

44 25 23 37 38

18 13 47 45 17

5 3 16 24 36

48 31 42 12 32

27 29 35 14 10

43 21 9 34

