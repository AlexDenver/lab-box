angular.module('app',['ngSanitize', 'ui.router'])
	.controller('intro', function ($scope) {
		$scope.name = "John";
		$scope.click = function(){
			$('#modal1').modal('open');
		}		
		$scope.posts = [{
		    "userId": 1,
		    "id": 1,
		    "title": "sunt aut facere repellat provident occaecati excepturi optio reprehenderit",
		    "body": "quia et suscipit\nsuscipit recusandae consequuntur expedita et cum\nreprehenderit molestiae ut ut quas totam\nnostrum rerum est autem sunt rem eveniet architecto"
		  },
		  {
		    "userId": 1,
		    "id": 2,
		    "title": "qui est esse",
		    "body": "est rerum tempore vitae\nsequi sint nihil reprehenderit dolor beatae ea dolores neque\nfugiat blanditiis voluptate porro vel nihil molestiae ut reiciendis\nqui aperiam non debitis possimus qui neque nisi nulla"
		  },
		  {
		    "userId": 1,
		    "id": 3,
		    "title": "ea molestias quasi exercitationem repellat qui ipsa sit aut",
		    "body": "et iusto sed quo iure\nvoluptatem occaecati omnis eligendi aut ad\nvoluptatem doloribus vel accusantium quis pariatur\nmolestiae porro eius odio et labore et velit aut"
		  },
		  {
		    "userId": 1,
		    "id": 4,
		    "title": "eum et est occaecati",
		    "body": "ullam et saepe reiciendis voluptatem adipisci\nsit amet autem assumenda provident rerum culpa\nquis hic commodi nesciunt rem tenetur doloremque ipsam iure\nquis sunt voluptatem rerum illo velit"
	  	}]

	  	$scope.student = [{
	  		  		fname: "Denver",
	  		  		lname: "Dsouza",
	  		  		reg: "MCA12", 
	  		  		report: [{
	  		  			subj: "Science", 
	  		  			marks: 60
	  		  		},{
	  		  			subj:"Maths", 
	  		  			marks: 63
	  		  		},{
	  	  				subj: "English",
	  	  				marks: 75
	  		  		}]
	  		  	},{
	  		  		fname: "Name 1",
	  		  		lname: "Lname 1",
	  		  		reg: "MCA13"
	  		  	}];
	  	$scope.expenses = {books: [60,80,40],qty: [2,3,1]};

	  	$scope.students = ["John","Aaron","Karen","Josh","Liam","Henry","Sean","Mike","Brady","Eric"];
	  	
	})
	.controller('student',function($scope) {
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
	.config(function($stateProvider){
		var home = {
			name: 'home',
			url: '/',
			templateUrl: './templates/home.html'
		};
		var about = {
			name: 'about',
			url: '/about',
			templateUrl: './templates/about.html'
		};
		  $stateProvider.state(home);
		  $stateProvider.state(about);
		  $stateProvider.state({
		  	name:'calc',
		  	url:'/calculate',
		  	templateUrl: './templates/calc.html'
		  });
		  $stateProvider.state({
		  	name:'stud',
		  	url:'/student',
		  	templateUrl: './templates/stud.html'
		  });
		  $stateProvider.state({
		  	name:'filters',
		  	url:'/filters',
		  	templateUrl: './templates/filters.html'
		  });
		  // console.log($stateProvider);
		  // $stateProvider.onInvalid('/');
	})
