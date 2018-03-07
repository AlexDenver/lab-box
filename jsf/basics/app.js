angular.module('blog',[])
.controller('ctrl',function($scope){
	$scope.dilip = "I am Dilip";
})
.controller('anddog',function($scope) {
	$scope.dilip = "I am not Dilip";	
	$scope.ch = 0;
	$scope.x = "Hello World";
	
	$scope.students = [{
		usn: "MCA12",
		fname: "Denver",
		lname: "Dsouza",
		marks: [{marks: 31,subject:'JSF'},{marks: 21,subject:'MIS'},{marks: 25,subject:'C++'}]
	},{
		usn: "MCA13",
		fname: "Dilip",
		lname: "Kumar",
		marks: [{marks: 31,subject:'JSF'},{marks: 41,subject:'MIS'},{marks: 35,subject:'C++'}],
	}];		
})

	