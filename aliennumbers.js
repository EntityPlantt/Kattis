// GitHub: EntityPlantt/Kattis
var t = null, i = 1;
require("readline").createInterface({
	input: process.stdin,
	output: process.stdout
}).on("line", input => {
	if (t == null) {
		t = parseInt(input);
	}
	else {
		var [nStr, sys1, sys2] = input.split(" "), n = 0;
		while (nStr.length > 0) {
			n *= sys1.length;
			n += sys1.indexOf(nStr[0]);
			nStr = nStr.substr(1);
		}
		do {
			nStr = sys2[n % sys2.length] + nStr;
			n = Math.floor(n / sys2.length);
		} while (n > 0);
		console.log("Case #" + i + ": " + nStr);
		i++;
		if (t < i) {
			process.exit();
		}
	}
});