/**
 * Binary Search Recursive Algorithm in JavaScript
 * 
 * Author: Elton Fonseca
 * Note: The array must be ordened!
 */
function main()
{
    var array = [1,2,3,4,5,6,7,8,9,10];
    var element = 5;

    if(search(array, 0, array.length - 1, element))
        console.log("Find!");
    else    
        console.log("Not Found!");
}

function search(array, low, high, element)
{
    var middle = Math.floor((low + high) / 2);

    if(high < low)
        return false;
    if(element < array[middle])
        return search(array, low, middle -1, element);
    else if(element > array[middle])
        return search(array, middle + 1, high, element);
    else
        return true; 
}
main();