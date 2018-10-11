<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
	<?
		class animal
		{			
			function __construct($v){
				$this->voice = $v;
			}
			function sound(){
				return $this->voice;
			}
		}
		$dog = new animal('barks');
		$cow = new animal('moos');

		echo "<h3>Dog: ".$dog->sound()."</h3>";
		echo "<h3>Cow: ".$cow->sound()."</h3>";
	?>
</body>
</html>