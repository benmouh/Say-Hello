var hello = require("./../build/Release/addon.node");
console.log(hello.sayHello("Lhoussaine"));
console.log("Finish");
require('assert').equal(hello.sayHello("Lhoussaine"),"Hello Lhoussaine");