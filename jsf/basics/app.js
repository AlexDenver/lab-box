angular.module('blog',[])
	.controller('ctrl',function($scope){
		$scope.dilip = "I am Dilip";
	})
	.controller('ctrl2',function($scope) {
		$scope.dilip = "I am not Dilip";	
		$scope.ch = 0;
		$scope.x = "Hello World";
		$scope.demon = function(str) {
			$scope.x = str + " " + ($scope.ch++);
		};
	})