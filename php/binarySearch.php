<?php 
    function main()
    {
        $array = Array(1,2,3,4,5,6,7,8,9,10);
        if(search($array, 0, 10, 7))
            print("Find!\n");
        else
            print("Not Found!\n");
    }

    function search($array, $low, $high, $element)
    {
        while($low < $high)
        {
            $middle = $low + ($high - $low) / 2;
            print($high."\n");
            if($array[$middle] == $element)
                return 1;
            else if($array[$middle] < $element)
                $low = $middle + 1;
            else 
                $high = $middle - 1;
        }
        return 0;
    }
    main();
?>