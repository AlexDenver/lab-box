<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
	<?
		// $a = "Hello World";
		// $x = str_replace("World", "Denver", "Hello World");

		// echo strlen($a);	
		echo "";

		$a1 = array(1,3,5,7,9);




		$a2 = array(2,4,6,8,10);
		$a3 = array();

		echo strcmp("str1", "str1");

		$total = (count($a1) + count($a2));
		for ($i=0; $i < $total; $i++) { 
			
			if(array_key_exists($i, $a1))
				array_push($a3, $a1[$i]);

			if(array_key_exists($i, $a2))
				array_push($a3, $a2[$i]);

		}


		// echo substr("string is awesome",7);

		echo "<h1>";
		foreach($a3 as $val){
			echo " $val";
		}

		echo "</h1>";
	?>
	





	<ul>
	<?  
		$arr = array("Sophia"=>"31","Jacob"=>"41","William"=>"39","Ramesh"=>"40");
		ksort($arr);

		foreach ($arr as $name => $val)	
			echo "<li>".$val."-".$name."</li>";
	?>	
	</ul>

	<ul>
	<?
		krsort($arr);
		foreach ($arr as $name => $val)	
			echo "<li>".$val."-".$name."</li>";
	?>
	</ul>

	<ul>
	<?	
		asort($arr);
		foreach ($arr as $name => $val)	
			echo "<li>".$val."-".$name."</li>";
	?>
	</ul>

	<ul>
	<?
		arsort($arr);
		foreach ($arr as $name => $val)	
			echo "<li>".$val."-".$name."</li>";
	?>
	</ul>




</body>
</html>