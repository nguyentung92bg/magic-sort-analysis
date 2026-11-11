/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleDataService$$LateUpdate
void Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleDataService__LateUpdate (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleDataService$$LateUpdate
   void Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleDataService__LateUpdate
   (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleDataService_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleDataService__LateUpdate_375cdc8
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uVar6;
  
                    /* try { // try from 0385cddc to 0395ce3f has its CatchHandler @ 0385cef0 */
  if ((bRam0000000005c33b9d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576d970);
    bRam0000000005c33b9d = 1;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    plVar5 = *(long **)(param_1 + 0x10);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar2 = *plVar5;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0576d970) {
                    /* try { // try from 0385ce50 to 0395ce57 has its CatchHandler @ 0385cee8 */
                    /* try { // try from 0385ce58 to 0395ced7 has its CatchHandler @ 0385cabc */
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0385ce5c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0576d970,0);
LAB_0385ce5c:
    (*(code *)*puVar1)(plVar5,uVar6,puVar1[1]);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}

