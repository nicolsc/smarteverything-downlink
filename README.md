#SmartEverythind - Downlink test

Send a test frame, requesting a downlink reply, using the [Telit module](http://www.telit.com/products/product-service-selector/product-service-selector/show/product/le51-868-s/) `AT$SF` command

`AT$SF=DEADBEEFCAFE,1`

The module's output will be displayed in the Serial monitor.

```
OK
+RX=0000123400001234
+RX END
```

