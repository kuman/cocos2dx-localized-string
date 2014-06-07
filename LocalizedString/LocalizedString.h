#pragma once

#include "cocos2d.h"

using namespace cocos2d;

class LocalizedString {

public:

    /**
     * @brief コンストラクタ
     */
    LocalizedString();

    /**
     * @brief デストラクタ
     */
    virtual ~LocalizedString();

    /**
     * @brief 端末言語を取得する。
     */
    static __String* localizedString(const char *key);

private:

    /**
     * @brief 端末言語を取得する。
     */
    static const char* getSystemLang();

};
