.PHONY: clean All

All:
	@echo "----------Building project:[ SearchInsertPosition - Debug ]----------"
	@cd "SearchInsertPosition" && "$(MAKE)" -f  "SearchInsertPosition.mk"
clean:
	@echo "----------Cleaning project:[ SearchInsertPosition - Debug ]----------"
	@cd "SearchInsertPosition" && "$(MAKE)" -f  "SearchInsertPosition.mk" clean
