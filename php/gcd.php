<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
<?php 
	if(!$_POST){
	?>
		<form method="POST">
			<input type="number" name="n1">
			<input type="number" name="n2">
			<input type="submit">
		</form>
	<?
	}else{
		function gcd($a, $b)
		{			
			if($a==$b)
				return $a;
			else
				if($a > $b)
					return gcd($a-$b, $b);
				else
					return gcd($a, $b-$a);
		}

		$x = $_POST['n1'];
		$y = $_POST['n2'];
		echo gcd($x, $y);
	}
	?>
</body>
</html>