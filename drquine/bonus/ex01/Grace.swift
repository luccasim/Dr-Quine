import Foundation
/*
	Swift is cool
*/
let t = "\"import Foundation\\n/*\\n\\tSwift is cool\\n*/\\nlet t = \" + t.debugDescription + \"\\nlet text = \" + t + \"\\nlet dir = FileManager.default.currentDirectoryPath + \\\"/Grace_kid.swift\\\"\\ntry? text.write(toFile: dir, atomically: false, encoding: String.Encoding.utf8)\""
let text = "import Foundation\n/*\n\tSwift is cool\n*/\nlet t = " + t.debugDescription + "\nlet text = " + t + "\nlet dir = FileManager.default.currentDirectoryPath + \"/Grace_kid.swift\"\ntry? text.write(toFile: dir, atomically: false, encoding: String.Encoding.utf8)"
let dir = FileManager.default.currentDirectoryPath + "/Grace_kid.swift"
try? text.write(toFile: dir, atomically: false, encoding: String.Encoding.utf8)