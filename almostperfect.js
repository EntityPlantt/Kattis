// GitHub: EntityPlantt/Kattis
require("readline").createInterface({input: process.stdin}).on("line", n => {
	n = parseInt(n);
	var t = 1, sqr = Math.sqrt(n);
	if (Math.round(sqr) == sqr) {
		t += sqr;
	}
	for (var i = 2; i * i < n; i++) {
		if (n % i == 0) {
			t += i + n / i;
		}
	}
	var m = n;
	if (n < t) {
		var temp = t;
		t = m;
		m = temp;
	}
	if (m - t > 2) {
		console.log(n, "not perfect");
	}
	else if (m - t) {
		console.log(n, "almost perfect");
	}
	else {
		console.log(n, "perfect");
	}
});