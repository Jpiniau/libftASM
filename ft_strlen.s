global _ft_strlen

_ft_strlen:
	mov rax, 0
	cmp [rdi], byte 0
	je end
	mov rcx, -1
	mov rax, 0
	cld
	repne scasb
	inc rcx
	not rcx
	mov rax, rcx
	jmp end

end:
	ret
