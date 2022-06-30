# Check-Mirror
Write a function checkMirror that takes an array of strings and checks if each string is a balanced as a mirror or not (can be read from the right or from the left ) and returns an array of bool. The function takes an array of strings & its size, and returns an array of Booleans where each of the Boolean indicates if the corresponding string is a mirror or not. Write another recursive function checkMirrorSingle which takes one string and returns a Boolean, which is true if the string is a mirror, and false otherwise. checkMirror will call checkMirrorSingle to form the returned array of Booleans.

For example, given the array {“racecar”,”play”,”test”,”qweewq”,”qwesdffdsewq”} and it size (5), the function should return the array {true,false,false,true,true}.

Note: the size of the string array is dynamic “entered by the user” and the array of strings should be entered at runtime. Print the bool array in main function not in the checkMirror function.
