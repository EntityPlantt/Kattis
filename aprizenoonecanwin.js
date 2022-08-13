// GitHub: EntityPlantt/Kattis
// Not working
var n, x, last = 0, now = 0;
require("readline").createInterface({input: process.stdin}).on("line", arr => {
	arr = arr.split(" ").map(elm => parseInt(elm));
	if (n == undefined) {
		n = arr[0];
		x = arr[1];
	}
	else {
		arr.sort();
		for (var i = 0; i < n; i++) {
			last = now;
			now = arr[i];
			if (last + now > x) {
				console.log(Math.max(i, 1));
				process.exit();
			}
		}
		console.log(n);
		process.exit();
	}
});