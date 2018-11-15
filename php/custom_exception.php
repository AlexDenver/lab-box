<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
<?

	class MyFileExcep extends Exception {
		function printMsg(){
			echo "My Error has Occured!";
		}			
	}

	// error_function(error_level,error_message,error_file,error_line,error_context)

	try {

		throw new MyFileExcep;

	} catch (MyFileExcep $e) {
		print  "<b>" . $e . "</br>";
		$e->printMsg();
	}


?>
</body>
</html>