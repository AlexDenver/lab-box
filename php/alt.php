<?
		$a1 = array(1,3,5,7,9);
		$a2 = array(2,4,6,8,10);
		$a3 = array();

		$total = (count($a1) + count($a2));
		for ($i=0; $i < $total; $i++) { 
			if(array_key_exists($i, $a1))
				array_push($a3, $a1[$i]);				
			if(array_key_exists($i, $a2))
				array_push($a3, $a2[$i]);				
		}


		

?>