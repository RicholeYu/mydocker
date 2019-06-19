var redis = require('redis')

// 创建一个 reids 客户端连接
var client = redis.createClient({
    port: '6379',
    password: 'yudafu2019',
    host: 'localhost'
})

client.get('hello', (err, res) => console.log(err, res))
