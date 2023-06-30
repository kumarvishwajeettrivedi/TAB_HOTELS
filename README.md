# TAB_HOTELS
hotel booking system this is a software model of my project this is in development phase and i will be adding new files to it in near future



A room booking system which is capable of booking room as well as customise the room with the avability of chair.
features it covers:
1 book a room
2 set the start time 
3 set the end time
4 set the host 
5 set the chair booking system 
6 define the room no



how i started:
1 no of room will be fixed say 10. which crossponds to constant no of host and room no.
2 with the help of class we can define the features of a room like booking a host for it and allocating a room no to it 
  end time depends on start time with a relation of 24 hours of gap multiplied by no of days default 1.
3 room no can be given by seeing avaibality of room which depends on no of room which is an array if empty then allocted "0"
   if array is zero the room is available.
                 with help of endtime we can see when the room is empty.(it will call the available room and put zero on the same room no to 
                 make it available.)
4.
chair are fixed say 100 according to capacity of room which is fixed guest can customise the room like a room calls for n no of chair  then
it will check for available chair and then spce in room both the condition will be in the functio chair (chair function will call the host 
function to check the size of room.)


