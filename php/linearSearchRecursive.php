<?php 
    function main()
    {
        $array = Array(1,2,3,4,5,6,7,8,9,10);
        if(search($array, 9, 5))
            print("Find!\n");
        else
            print("Not Found!\n");
    }

    function search(Array $array, $element, $value)
    {
        if($element < 0)
            return false;
        elseif ($array[$element] == $value)
            return true;
        else
            return search($array, $element - 1, $value);
    }
    main();
?>