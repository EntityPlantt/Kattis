// GitHub: EntityPlantt/Kattis
// Not working
var t = null;
require("readline").createInterface({input: process.stdin}).on("line", n => {
	n = parseInt(n);
	if (t == null) {
		t = n;
	}
	else {
		const oper = "+-*/";
		var didit = false;
		for (var i of oper) {
			if (didit) {
				break;
			}
			for (var j of oper) {
				if (didit) {
					break;
				}
				for (var k of oper) {
					eval(`var r = 4 ${i} 4 ${j} 4 ${k} 4;`);
					if (r == n) {
						console.log(`4 ${i} 4 ${j} 4 ${k} 4 = ${r}`);
						didit = true;
						break;
					}
				}
			}
		}
		if (!didit) {
			console.log("no solution");
		}
		if (--t == 0) {
			process.exit();
		}
	}
});