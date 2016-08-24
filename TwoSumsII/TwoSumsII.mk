##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=TwoSumsII
ConfigurationName      :=Debug
WorkspacePath          :=/Users/Liang/Documents/LintCode
ProjectPath            :=/Users/Liang/Documents/LintCode/TwoSumsII
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Liang Peng
Date                   :=24/08/2016
CodeLitePath           :="/Users/Liang/Library/Application Support/codelite"
LinkerName             :=g++
SharedObjectLinkerName :=g++ -dynamiclib -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="TwoSumsII.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/Users/Liang/Downloads/codelite.app/Contents/SharedSupport/
Objects0=$(IntermediateDirectory)/Strstr.cpp$(ObjectSuffix) $(IntermediateDirectory)/SearchInsertPosition.cpp$(ObjectSuffix) $(IntermediateDirectory)/Template.cpp$(ObjectSuffix) $(IntermediateDirectory)/TwoSumsII.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Strstr.cpp$(ObjectSuffix): Strstr.cpp $(IntermediateDirectory)/Strstr.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/Liang/Documents/LintCode/TwoSumsII/Strstr.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Strstr.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Strstr.cpp$(DependSuffix): Strstr.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Strstr.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Strstr.cpp$(DependSuffix) -MM Strstr.cpp

$(IntermediateDirectory)/Strstr.cpp$(PreprocessSuffix): Strstr.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Strstr.cpp$(PreprocessSuffix)Strstr.cpp

$(IntermediateDirectory)/SearchInsertPosition.cpp$(ObjectSuffix): SearchInsertPosition.cpp $(IntermediateDirectory)/SearchInsertPosition.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/Liang/Documents/LintCode/TwoSumsII/SearchInsertPosition.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SearchInsertPosition.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SearchInsertPosition.cpp$(DependSuffix): SearchInsertPosition.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SearchInsertPosition.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/SearchInsertPosition.cpp$(DependSuffix) -MM SearchInsertPosition.cpp

$(IntermediateDirectory)/SearchInsertPosition.cpp$(PreprocessSuffix): SearchInsertPosition.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SearchInsertPosition.cpp$(PreprocessSuffix)SearchInsertPosition.cpp

$(IntermediateDirectory)/Template.cpp$(ObjectSuffix): Template.cpp $(IntermediateDirectory)/Template.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/Liang/Documents/LintCode/TwoSumsII/Template.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Template.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Template.cpp$(DependSuffix): Template.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Template.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Template.cpp$(DependSuffix) -MM Template.cpp

$(IntermediateDirectory)/Template.cpp$(PreprocessSuffix): Template.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Template.cpp$(PreprocessSuffix)Template.cpp

$(IntermediateDirectory)/TwoSumsII.cpp$(ObjectSuffix): TwoSumsII.cpp $(IntermediateDirectory)/TwoSumsII.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/Liang/Documents/LintCode/TwoSumsII/TwoSumsII.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TwoSumsII.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TwoSumsII.cpp$(DependSuffix): TwoSumsII.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TwoSumsII.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/TwoSumsII.cpp$(DependSuffix) -MM TwoSumsII.cpp

$(IntermediateDirectory)/TwoSumsII.cpp$(PreprocessSuffix): TwoSumsII.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TwoSumsII.cpp$(PreprocessSuffix)TwoSumsII.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


