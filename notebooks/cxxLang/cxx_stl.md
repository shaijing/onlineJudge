---
html:
  embed_local_images: true # 设置为 true，那么所有的本地图片将会被嵌入为 base64 格式
  embed_svg: true
  offline: false
  # toc: false
  # 默认是缺省的，目录会被启动，但是不会显示。可以设置为 true 或 false，来主动 显示 或 隐藏

# 导出设置
puppeteer:
  landscape: false
  format: "A4"
  timeout: 3000

markdown:

  image_dir: ./assets/images
#   path: output.md
  ignore_from_front_matter: false
  absolute_image_path: false

toc:
  depth_from: 1
  depth_to: 6
  ordered: true
# 自动导出设置
#export_on_save:
#  html: true
#   markdown: true
#   puppeteer: true # 保存文件时导出 PDF
# puppeteer: ["pdf", "png"] # 保存文件时导出 PDF 和 PNG
---


<!-- @import "[TOC]" {cmd="toc" depthFrom=1 depthTo=6 orderedList=true} -->

<!-- code_chunk_output -->

1. [STL Pair](#stl-pair)
    1. [1. STL pair介绍](#1-stl-pair介绍)
    2. [2. STL pair的使用](#2-stl-pair的使用)
        1. [2.1 STL pair的声明](#21-stl-pair的声明)
        2. [2.2 STL pair的插入数据](#22-stl-pair的插入数据)
2. [STL Map](#stl-map)
    1. [1. STL map介绍](#1-stl-map介绍)
    2. [2. STL map的使用](#2-stl-map的使用)
        1. [2.1 STL Map的声明](#21-stl-map的声明)
        2. [2.2 STL Map的插入数据](#22-stl-map的插入数据)
        3. [2.3 查找map变量中的某个key](#23-查找map变量中的某个key)
        4. [2.4 删除map变量中的元素、清空map变量](#24-删除map变量中的元素-清空map变量)
    3. [3. STL unordered_map的使用](#3-stl-unordered_map的使用)
    
<!-- /code_chunk_output -->

<!-- @import "cxx_stl_pair.md" -->
<!-- @import "cxx_stl_map.md" -->
