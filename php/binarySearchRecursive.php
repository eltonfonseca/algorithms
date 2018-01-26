<?php 
    function main()
    {
        $array = Array(1,2,3,4,5,6,7,8,9,10);
        if(search($array, 0, 10, 8))
            print("Find!\n");
        else
            print("Not Found!\n");
    }

    function search($array, $low, $high, $element)
    {
        $middle = $low + ($high - $low) / 2; 
        if($high < $low)
            return 0;
        if($element < $array[$middle])
            return search($array, $low, $middle - 1, $element);
        else if($element > $array[$middle])
            return search($array, $middle + 1, $high, $element);
        else 
            return 1;
    }
    main();
?>