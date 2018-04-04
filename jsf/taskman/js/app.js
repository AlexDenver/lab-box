angular.module('taskman',[])
	.controller('newTask',function($scope) {
		
	})
	.controller('taskView',function($scope) {
		$scope.tasks = [{
			no: 0,
			type: 'text',
			body: 'You can also get the latest release using NPM. This release contains source files as well as the compiled CSS and JavaScript files.',
			color: 'blue'
		},{
			no: 1,
			type: 'list',
			body: [{
				text: 'Update Code',
				done: false
			},{
				text: 'Commit Code',
				done: false
			},{
				text: 'Push Code',
				done: false
			}],
			color: 'blue'
		},{
			no: 2,
			type: 'list',
			body: [{
				text: 'Update Code',
				done: false
			},{
				text: 'Commit Code',
				done: false
			},{
				text: 'Push Code',
				done: false
			}],
			color: 'blue'
		}];
		$scope.markTask = function(taskIndex,bodyIndex) {
			$scope.tasks[taskIndex].body[bodyIndex].done=!$scope.tasks[taskIndex].body[bodyIndex].done;
			console.log($scope.tasks[taskIndex].body[bodyIndex].done);
			console.log("Reached Mark Task");
		};
	})