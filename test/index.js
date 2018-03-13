var hello = require("./../build/Release/say_hello_addon.node");
var assert = require('assert');

console.log(hello.sayHello("Lhoussaine"));
console.log("Finish");
assert.equal(hello.sayHello("Lhoussaine"),"Hello Lhoussaine");

describe('.sayHello(param)', function () {
  it('returns hello the name given in parameter', function () {
    assert.deepEqual(hello.sayHello("Lhoussaine"), "Hello Lhoussaine");
  });
});