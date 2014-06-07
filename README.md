cocos2dx-localized-string
=========================

LocalizedString for Cocos2d-x ver 3.0

## How to USE

1. LocalizedString folder in this repository copy to cocos2d/extensions folder in your cocos2d-x project.

2. Create LocalizedString.plist to Resources folder, and do Localization.

![LocalizedString.plist](https://raw.githubusercontent.com/kuman/cocos2dx-localized-string/master/images/capture1.png)

![LocalizedString example](https://raw.githubusercontent.com/kuman/cocos2dx-localized-string/master/images/capture2.png)

```
#include "LocalizedString/LocalizedString.h"

void TestScene::onEnter() {
  CCLOG("hello = %s", LocalizedString::localizedString("hello")->getCString());
}

=> hello = こんにちわ
```
