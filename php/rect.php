<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
	<form method="post">
		<input name="height" type="number">
		<input name="width" type="number">
		<input type="submit">
	</form>
	<?		
		class myrectangle{
			function __construct($h, $w){
				$this->height = $h;
				$this->width = $w;
			}

			function perimeter(){
				return 2* ($this->height + $this->width);
			}

			function area(){
				return $this->width*$this->height;
			}
			
		};
		if($_POST){
			$myRect = new myrectangle($_POST['height'],$_POST['width']);
			echo "<h1>Perimeter: ".$myRect->perimeter()."</h1>";
			echo "<h1>Area: ".$myRect->area()."</h1>";
		}


	?>	

</body>
</html>