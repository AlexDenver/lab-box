exports.getDate = function(option) {
	d = Date();
	d = d.split(' ');
	d = {
		day: d[0],
		month: d[1],
		date: d[2],
		year: d[3],
		time: d[4],
		timeZone: d[5],
		full: Date(),		
	};

	return d[option || "full"];
}
exports.name="Denver";