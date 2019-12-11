<?php

$server_name = "itp258.czxnupc0qhwl.us-east-2.rds.amazonaws.com:3306";           //not sure if this is right
$database_name = "assgn15";
$table_name = "stones";
$connection_string = "mysql:host=$server_name;dbname=$database_name";

$username = "root";
$password = "uheZuza2*";

$connection = new PDO($connection_string, $username, $password);

$sql = "SELECT * FROM stones";

$records = $connection->query($sql);


// Create the table and first row manually
$table = "<table>";
    $table .= "<tr>";
    	$table .= "<th>";
    	$table .= "ID";
    	$table .= "</th>";

    	$table .= "<th>";
    	$table .= "Mind";
    	$table .= "</th>";

    	$table .= "<th>";
    	$table .= "Soul";
    	$table .= "</th>";

    	$table .= "<th>";
    	$table .= "Time";
    	$table .= "</th>";

    	$table .= "<th>";
    	$table .= "Power";
    	$table .= "</th>";

    	$table .= "<th>";
    	$table .= "Space";
    	$table .= "</th>";

      $table .= "<th>";
      $table .= "Reality";
      $table .= "</th>";
    $table .= "</tr>";

        // Each record is a new table row
        foreach( $records as $row )
        {
            //build your rows of th and tds here
        $table .= "<tr>";
            $table .= "<th>";
            $table .= $row["ID"];
            $table .= "</th>";

            $table .= "<td>";
            $table .= $row["mind"];
            $table .= "</td>";

            $table .= "<td>";
            $table .= $row["soul"];
            $table .= "</td>";

            $table .= "<td>";
            $table .= $row["time"];
            $table .= "</td>";

            $table .= "<td>";
            $table .= $row["power"];
            $table .= "</td>";

            $table .= "<td>";
            $table .= $row["space"];
            $table .= "</td>";

            $table .= "<td>";
            $table .= $row["reality"];
            $table .= "</td>";
	    $table .= "</tr>";
        }

// Close table tag
$table .= "</table>";

?>
<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<title>Assignment 15</title>
  <link href="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T" crossorigin="anonymous">
  <link rel="stylesheet" type="text/css" href="css/styles.css">
</head>
<body style="margin:20px;">

<div class="container">
<div class="row">
<div class="col-md-6">

	<h1>Assignment 15/Final</h1>
  <a href="apiadmin/index.html">Manual Data Entry - Admin Access</a>

	<h2>Jesus Marie, they're infinity minerals</h2>

	<?php echo($table); ?>
</div>
</div>
</div>

</body>
</html>
