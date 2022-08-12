// GitHub: EntityPlantt/Kattis
require("readline").createInterface({
    input: process.stdin,
    output: process.stdout
}).on("line", n => {
    var o = 0;
    n = parseInt(n);
    for (var i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            n /= i--;
            o++;
        }
    }
    console.log(++o);
});