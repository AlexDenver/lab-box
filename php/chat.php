<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
<form>
	<?
		$d = new datetime();
		$session = $d->hour < 9 ? "Day" : 'Evening';
		$ops = array('hi' => 'Hello There!','hello' => "How are you ?", 'im fine' => 'good to know!', 'bye' => "have a nice $session", 'joke' => "If tin whistles are made of tin, what are fog horns made of?");
		if($_POST){
			$in = $_POST['in'];
			echo "<h3>$ops[$in]</h3>";
		}
	?>
	<input type="text" name="in"><button>Send</button>
</form>
</body>
</html>