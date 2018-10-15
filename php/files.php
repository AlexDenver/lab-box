<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>	
	<?		
		$file = fopen('data.txt', 'a');
		// echo ;
		// fwrite(handle, string)
		fwrite($file, "AV\n");

		echo fread($file, 1);

		$file = fopen('data.txt', 'r');
		while($line = fgetc($file)){
			
			echo $line;
		}
		fclose($file);
	?>	
</body>
</html>