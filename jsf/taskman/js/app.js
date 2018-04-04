angular.module('taskman',['angular-storage'])
	.controller('newTask',function($scope,store) {
		$scope.tasks = ['1'];
		var json = (store.get('tasks'));
		console.log(json);
		if(json == null || json.length==0)
			$scope.tasks = new Array();
		else
			$scope.tasks=json;
		// store.remove('tasks');
		// console.log(store);

		$scope.create = function(body,color,typex) {
			$scope.tasks.push({
				no: $scope.tasks.length,
				type: typex,
				body: body,
				color: color
			});
			
			json = $scope.tasks;
			// if(json.length==0 || json == null)
			// else
			// json.push($scope.tasks);

			store.set('tasks',(json));
		};
	})
	.controller('taskView',function($scope,store) {
		$scope.tasks = store.get('tasks');
		// console.log(store.get('tasks'))
		$scope.deleteTask=function(i) {
			console.log("he");
			$scope.tasks.splice(i,1);
		};


		$scope.markTask = function(taskIndex,bodyIndex) {
			$scope.tasks[taskIndex].body[bodyIndex].done=!$scope.tasks[taskIndex].body[bodyIndex].done;
		};
	})