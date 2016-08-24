.PHONY: clean All

All:
	@echo "----------Building project:[ SearchA2DMatrix - Debug ]----------"
	@cd "SearchA2DMatrix" && "$(MAKE)" -f  "SearchA2DMatrix.mk"
clean:
	@echo "----------Cleaning project:[ SearchA2DMatrix - Debug ]----------"
	@cd "SearchA2DMatrix" && "$(MAKE)" -f  "SearchA2DMatrix.mk" clean
