#pragma once

#include "BlogPostCard.h"
#include "Post.h"
#include "PostgresConnection.h"
#include <list>

using namespace System;
using namespace QQ;
using namespace System::Collections::Generic;

public ref class PostRepository
{
public:
    static List<QQ::Post^>^ LoadAllPosts();
};
