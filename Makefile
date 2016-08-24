.PHONY: clean All

All:
	@echo "----------Building project:[ FirstPositionOfTarget - Debug ]----------"
	@cd "FirstPositionOfTarget" && "$(MAKE)" -f  "FirstPositionOfTarget.mk"
clean:
	@echo "----------Cleaning project:[ FirstPositionOfTarget - Debug ]----------"
	@cd "FirstPositionOfTarget" && "$(MAKE)" -f  "FirstPositionOfTarget.mk" clean
