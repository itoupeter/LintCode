.PHONY: clean All

All:
	@echo "----------Building project:[ FindMinimumInRotatedSortedArray - Debug ]----------"
	@cd "FindMinimumInRotatedSortedArray" && "$(MAKE)" -f  "FindMinimumInRotatedSortedArray.mk"
clean:
	@echo "----------Cleaning project:[ FindMinimumInRotatedSortedArray - Debug ]----------"
	@cd "FindMinimumInRotatedSortedArray" && "$(MAKE)" -f  "FindMinimumInRotatedSortedArray.mk" clean
