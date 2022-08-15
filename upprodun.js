// GitHub: EntityPlantt/Kattis
var n, m;
require("readline").createInterface({input: process.stdin}).on("line", x => {
	if (n == undefined) {
		n = parseInt(x);
	}
	else {
		m = parseInt(x);
		for (var i = 0; i < n; i++) {
			var str = "";
			for (var j = 0; j < Math.floor(m / n); j++) {
				str += "*";
			}
			if (m % n > i) {
				str += "*";
			}
			console.log(str);
		}
		process.exit();
	}
});