import Foundation

func task(cmd: String, arg: [String])
{
	let task = Process()
	task.launchPath = cmd
	task.arguments = arg
	task.launch()
	task.waitUntilExit()
}

var i = 5
if i == 0{
	exit(0)
}
let out = CommandLine.arguments[0]
i = (out != "./Sully") ? i - 1 : i
let filename = "Sully_" + String(i)
let code = "\"import Foundation\\n\\nfunc task(cmd: String, arg: [String])\\n{\\n\\tlet task = Process()\\n\\ttask.launchPath = cmd\\n\\ttask.arguments = arg\\n\\ttask.launch()\\n\\ttask.waitUntilExit()\\n}\\n\\nvar i = \\(i)\\nif i == 0{\\n\\texit(0)\\n}\\nlet out = CommandLine.arguments[0]\\ni = (out != \\\"./Sully\\\") ? i - 1 : i\\nlet filename = \\\"Sully_\\\" + String(i)\\nlet code = \" + code.debugDescription + \"\\nlet text = \" + code + \"\\nlet dir = FileManager.default.currentDirectoryPath + \\\"/\\\\(filename).swift\\\"\\ntry? text.write(toFile: dir, atomically: false, encoding: String.Encoding.utf8)\\ntask(cmd: \\\"/usr/bin/xcrun\\\", arg: [\\\"--sdk\\\",\\\"macosx\\\", \\\"swiftc\\\", filename+\\\".swift\\\"])\\ntask(cmd: filename, arg: [])\""
let text = "import Foundation\n\nfunc task(cmd: String, arg: [String])\n{\n\tlet task = Process()\n\ttask.launchPath = cmd\n\ttask.arguments = arg\n\ttask.launch()\n\ttask.waitUntilExit()\n}\n\nvar i = \(i)\nif i == 0{\n\texit(0)\n}\nlet out = CommandLine.arguments[0]\ni = (out != \"./Sully\") ? i - 1 : i\nlet filename = \"Sully_\" + String(i)\nlet code = " + code.debugDescription + "\nlet text = " + code + "\nlet dir = FileManager.default.currentDirectoryPath + \"/\\(filename).swift\"\ntry? text.write(toFile: dir, atomically: false, encoding: String.Encoding.utf8)\ntask(cmd: \"/usr/bin/xcrun\", arg: [\"--sdk\",\"macosx\", \"swiftc\", filename+\".swift\"])\ntask(cmd: filename, arg: [])"
let dir = FileManager.default.currentDirectoryPath + "/\(filename).swift"
try? text.write(toFile: dir, atomically: false, encoding: String.Encoding.utf8)
task(cmd: "/usr/bin/xcrun", arg: ["--sdk","macosx", "swiftc", filename+".swift"])
task(cmd: filename, arg: [])